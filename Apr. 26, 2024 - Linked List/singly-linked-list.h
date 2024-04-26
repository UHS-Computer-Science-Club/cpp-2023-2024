#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <cstddef>

namespace containers {

template <typename T>
class SinglyLinkedList {
 public:
  ~SinglyLinkedList() noexcept;

  void push_back(const T &kPayload) noexcept;

  size_t size() const noexcept;

  T &operator[](const size_t kIndex) noexcept;

 private:
  struct Node {
    T payload;
    Node *next = nullptr;
  };

  Node *head_ = nullptr;
  size_t size_ = 0;
};

template <typename T>
T &SinglyLinkedList<T>::operator[](const size_t kIndex) noexcept {
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
