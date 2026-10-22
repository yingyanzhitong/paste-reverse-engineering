// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "PasteReplica",
    platforms: [.macOS(.v14)],
    products: [
        .library(name: "PasteReplicaCore", targets: ["PasteReplicaCore"]),
        .executable(name: "PasteReplica", targets: ["PasteReplica"]),
        .executable(name: "paste-replica-mcp", targets: ["PasteReplicaMCP"]),
        .executable(name: "paste-replica-core-tests", targets: ["PasteReplicaCoreTests"])
    ],
    targets: [
        .target(name: "PasteReplicaCore"),
        .executableTarget(name: "PasteReplica", dependencies: ["PasteReplicaCore"]),
        .executableTarget(name: "PasteReplicaMCP", dependencies: ["PasteReplicaCore"]),
        .executableTarget(name: "PasteReplicaCoreTests", dependencies: ["PasteReplicaCore"], path: "Tests/PasteReplicaCoreTests")
    ]
)
