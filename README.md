A **modern desktop 3D mockup app**, a spiritual and practical replacement for **Adobe Dimension**, focused on:

- ✅ Auto-aligning 3D models to background images using perspective detection
- ✅ Lighting them realistically using HDRI
- ✅ Simple drag-and-drop UI for adding assets
- ✅ Photorealistic export (PNG/JPEG)

---

## 🛠️ Tech Stack (Adobe-style, Core + UI Split)

### 🔷 Core Engine (Cross-platform C++ Layer)

- **OpenCV** – Perspective detection (vanishing points, horizon line)
- **Assimp / tinygltf** – Model importing
- **Custom C++ logic** – Scene transforms, camera setup, and mockup logic
- **C bridging header** – To expose C++ to Swift
- (Optional) Custom rendering later if you go beyond SceneKit

### 🍏 macOS App (Swift-based, Apple-native)

- **SwiftUI** – Modern UI panels and asset browser
- **AppKit** – For advanced or unsupported SwiftUI features
- **SceneKit** – Native 3D engine for GLTF, OBJ, USDZ with:
  - PBR support
  - HDRI lighting & shadows
  - Real-time camera/view manipulation
- **Model I/O** – For asset handling
- **SCNRenderer + Core Graphics** – For PNG/JPEG export

---

## ✅ Version Control (Git Integrated)

### 📦 Git for Project Structure & Collaboration

- **Git Repository from Day 1** – Initialize Git immediately after scaffolding
- **Project Layout:**

  ```
  makefile
  CopyEdit
  dimension-replacement/
  ├── .git/                    # Git repo
  ├── .gitignore               # Covers Swift, Xcode, C++, and build files
  ├── README.md                # Project overview and goals
  ├── LICENSE                  # (This project is licensed under the GNU GPL v3 License.)
  ├── CoreEngine/              # C++ core engine (OpenCV, model handling)
  │   ├── include/
  │   ├── src/
  │   └── CMakeLists.txt
  ├── MacApp/                  # Swift project (Xcode)
  │   ├── Sources/             # SwiftUI files
  │   ├── Bridging/            # C++ <-> Swift bridging code
  │   ├── Assets/              # HDRIs, models, backgrounds
  │   └── DimensionApp.xcodeproj/
  └── Tests/                   # Unit tests for both parts

  ```

- **Branch Strategy:**
  - `main` – Production-ready builds
  - `dev` – Active feature development
  - `feature/*` – Short-lived branches for isolated features
  - Frequent commits, meaningful messages

---

## 🚀 What’s the Plan?

1. **Start with macOS app (Swift + SceneKit)**
2. **Build C++ core alongside, shared via bridging**
3. **Set up Git immediately to track and manage structure**
4. **Use OpenCV for smart perspective detection**
5. **SceneKit for 3D rendering, drag/drop, lighting**
6. **SCNRenderer for image export**
7. **When solid, port UI layer to Windows (C# + DirectX/OpenGL), reusing C++ core**

### License

This project is licensed under the [GNU GPL v3](https://www.gnu.org/licenses/gpl-3.0.en.html).  
You can use, modify, and share it freely.  
Visit [https://kefka.vercel.app/] if you'd like to support the project or donate.
