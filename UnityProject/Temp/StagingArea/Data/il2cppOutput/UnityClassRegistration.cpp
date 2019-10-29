extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; template <> void RegisterUnityClass<AudioReverbZone>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class VisualEffectSubgraphBlock; 
class VisualEffectSubgraphOperator; 
class VisualEffectResource; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//1. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//2. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//5. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//8. Camera
	RegisterUnityClass<Camera>("Core");
	//9. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//10. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//11. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//12. GameManager
	RegisterUnityClass<GameManager>("Core");
	//13. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//14. Renderer
	RegisterUnityClass<Renderer>("Core");
	//15. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//16. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//17. Shader
	RegisterUnityClass<Shader>("Core");
	//18. Material
	RegisterUnityClass<Material>("Core");
	//19. Light
	RegisterUnityClass<Light>("Core");
	//20. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//21. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//22. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//23. Mesh
	RegisterUnityClass<Mesh>("Core");
	//24. Texture
	RegisterUnityClass<Texture>("Core");
	//25. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//26. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//27. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//28. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//29. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//30. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//31. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//32. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//33. GameObject
	RegisterUnityClass<GameObject>("Core");
	//34. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//35. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//36. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//37. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//38. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//39. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//40. Transform
	RegisterUnityClass<Transform>("Core");
	//41. Sprite
	RegisterUnityClass<Sprite>("Core");
	//42. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//43. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//44. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//45. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//46. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//47. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//48. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//49. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//50. Collider
	RegisterUnityClass<Collider>("Physics");
	//51. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//52. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//53. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//54. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//55. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//56. Motion
	RegisterUnityClass<Motion>("Animation");
	//57. Animator
	RegisterUnityClass<Animator>("Animation");
	//58. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//59. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//60. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//61. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//62. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//63. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//64. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//65. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//66. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//67. InputManager
	RegisterUnityClass<InputManager>("Core");
	//68. TagManager
	RegisterUnityClass<TagManager>("Core");
	//69. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//70. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//71. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//72. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//73. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//74. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//75. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//76. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//77. AudioReverbZone
	RegisterUnityClass<AudioReverbZone>("Audio");
	//78. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//79. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//80. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//81. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//82. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//83. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//84. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//85. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");

}
