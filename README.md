**UE4-PushPull**

This project showcases character interaction with dynamic objects in Unreal Engine 4 using C++. The character can push and pull objects within reach by holding the 'F' key and performing a raycast to detect them.

**Features:**

* **Raycasting:** The character performs a line trace (Unreal Engine's term for raycast) from the camera's direction to detect dynamic objects in the world.
* **Push/Pull:** While holding the 'F' key, the character can push or pull the detected object based on its position relative to the character.
* **Dynamic Object Handling:** The code focuses on pushing and pulling dynamic objects, ensuring they react to physics simulations.
* **Clear Code Structure:** The code is well-organized and commented to enhance readability and maintainability.

**Folder Structure:**

* **Characters:**
    * Character class header file (.h)
    * Character class implementation file (.cpp)
