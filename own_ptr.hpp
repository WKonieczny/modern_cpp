
template <typename T>
class OwnPointer {
private:
T* ptr_;

public: 
// friend class OwnPointer<T>;
OwnPointer(T* ptr) {
    ptr_ = ptr;
}
OwnPointer(const OwnPointer& ptr) = delete;
OwnPointer(OwnPointer<T> && other_ptr) noexcept {
    if(ptr_)
        delete ptr_;

    ptr_ = other_ptr.ptr_;
    other_ptr.ptr_ = nullptr; 

}

OwnPointer & operator=(OwnPointer &) = delete;

virtual ~OwnPointer() {
    delete ptr_;
}

T& operator*() {
    return *ptr_;
}

T* operator->() {
    return ptr_;
}


};