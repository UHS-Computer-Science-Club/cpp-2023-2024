#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <cstddef>

namespace containers {

template <typename T>
class SinglyLinkedList {
 public:
  struct Node {
    T payload;
    Node *next = nullptr;
  };

  class Iterator {
   public:
    explicit Iterator(Node *node) : current_node_(node) {}

    T &operator*() const noexcept;

    Iterator &operator++() noexcept;

   private:
    Node *current_node_;
  };

  ~SinglyLinkedList() noexcept;

  void push_back(const T &kPayload) noexcept;

  size_t size() const noexcept;

  Iterator begin() const noexcept;

  Iterator end() const noexcept;

  T &operator[](const size_t kIndex) const noexcept;

 private:
  Node *head_ = nullptr;
  size_t size_ = 0;
};

template <typename T>
typename SinglyLinkedList<T>::Iterator SinglyLinkedList<T>::end()
    const noexcept {
  return Iterator(nullptr);
}

template <typename T>
typename SinglyLinkedList<T>::Iterator SinglyLinkedList<T>::begin()
    const noexcept {
  return Iterator(this->head_);
}

template <typename T>
typename SinglyLinkedList<T>::Iterator &
SinglyLinkedList<T>::Iterator::operator++() noexcept {
  // Intentional nonexistent bound checking
  this->current_node_ = this->current_node_->next;
  return *this;
}

template <typename T>
T &SinglyLinkedList<T>::Iterator::operator*() const noexcept {
  // Intentional nonexistent nullptr checking
  return this->current_node_->payload;
}

template <typename T>
T &SinglyLinkedList<T>::operator[](const size_t kIndex) const noexcept {
  Node *current_node = this->head_;

  for (size_t current_index = 0; current_index < kIndex; ++current_index) {
    current_node = current_node->next;
  }

  return current_node->payload;
}

template <typename T>
size_t SinglyLinkedList<T>::size() const noexcept {
  return this->size_;
}

template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList<T>() noexcept {
  Node *current_node = this->head_;

  while (current_node != nullptr) {
    Node *next_node = current_node->next;
    delete current_node;
    current_node = next_node;
  }
}

template <typename T>
void SinglyLinkedList<T>::push_back(const T &kPayload) noexcept {
  Node *new_node = new Node{.payload = kPayload};

  if (this->head_ == nullptr) {
    this->head_ = new_node;
  } else {
    Node *current_node = head_;
    while (current_node->next != nullptr) {
      current_node = current_node->next;
    }
    current_node->next = new_node;
  }

  ++this->size_;
}

}  // namespace containers

#endif  // SINGLY_LINKED_LIST_H
