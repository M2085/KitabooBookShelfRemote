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
        
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "c6f8339cc6cacd6d4a61e670b8bd8683bdba8a131fc06c640f70e904a3f92fa4"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "21690204092e0012045fb89915a87332461e613c816b78af7b58aee275803843"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "a8f03880b0084b24f6b28201df5a07e639318fd2bdb001fe7255688244884332"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)
