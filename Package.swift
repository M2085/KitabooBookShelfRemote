// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KitabooBookShelfRemote",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KitabooBookShelfRemote",
            targets: ["KitabooBookShelfRemote", "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
//        .binaryTarget(name: "KitabooBookShelf", path: "./Sources/KitabooBookShelf.xcframework"),
//        .binaryTarget(name: "Kitaboo_Reader_SDK", path: "./Sources/Kitaboo_Reader_SDK.xcframework"),
//        .binaryTarget(name: "KitabooSDKWithReader", path: "./Sources/KitabooSDKWithReader.xcframework"),
        
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "d0fa9e7035d9cf2876bb62c67cf9a55b4ac71a209e578c929b60de0823bcb65c"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "997e6dee598dbeb961114151692a2910cf4d4fadd208b84598da7ed4c313e597"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "2f377ba294232ce268ae450f308404f56385fcf079b5a72bd8b26f9a5e20ed81"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)
