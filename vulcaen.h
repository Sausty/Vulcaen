/*
    ptdrrrr je veux mettre fin a mes jours

    - L'auteur de Vulcaen, le 6 juin 2021 a 22:30

    Licence LSD
*/

#ifndef VULCAEN_H
#define VULCAEN_H

#define type typedef

// Si vous voulez utilisez un loader custo (volk par exemple)
// Maintenant que vous avez Vulcaen vous pouvez pas vous plaindre que l'anglais c'est dur, y'a pas de quoi (feur)

#ifndef VULCAEN_VK_PATH
    #define VULCAEN_VK_PATH <vulkan/vulkan.h>
#endif

#include VULCAEN_VK_PATH

// Base

type VkBool32 VcBooleen32;
type VkDeviceAddress VcAddressePeripherique;
type VkDeviceSize VcTaillePeripherique;
type VkFlags VcDrapeau;
type VkSampleMask VcMasqueEchantillon;

#define VC_ATTACHEMENT_NON_UTILISE            (~0U)
#define VC_FAUX                               0U
#define VC_LOD_PAS_DE_CLAMP                   1000.0F
#define VC_FAMILLE_FIL_IGNORE                 (~0U)
#define VC_LISTE_COUCHE_RESTANTES             (~0U)
#define VC_NIVEAUX_MIP_RESTANTS               (~0U)
#define VC_SOUSPASSE_EXTERNE                  (~0U)
#define VC_VRAI                               1U
#define VC_TAILLE_ENTIERE                     (~0ULL)
#define VC_MAX_TYPE_MEMOIRE                   32U
#define VC_MAX_TAS_MEMOIRE                    16U
#define VC_MAX_TAILLE_NOM_CARTE_GRAPHIQUE     256U
#define VC_TAILLE_UUID                        16U
#define VC_MAX_TAILLE_NOM_EXTENSION           256U
#define VC_MAX_TAILLE_DESCRIPTION             256U

// Objets Vulkan

type VkInstance VcInstance;
type VkSurfaceKHR VcSurfaceKHR;
type VkPhysicalDevice VcCarteGraphique;
type VkDevice VcPeripherique;
type VkQueue VcFil;
type VkSwapchainKHR VcChaineEchangeKHR;
type VkCommandPool VcPiscineCommande;
type VkCommandBuffer VcTamponCommande;
type VkSampler VcEchantilloneur;
type VkBuffer VcTampon;
type VkDeviceMemory VcMemoirePeripherique;
type VkImage VcImage;
type VkBufferView VcVueTampon;
type VkImageView VcVueImage;
type VkFramebuffer VcTamponImage;
type VkDescriptorSetLayout VcSchemaEnsembleDescripteur;
type VkDescriptorSet VcEnsembleDescripteur;
type VkDescriptorPool VcPiscineDescripteur;
type VkPipelineLayout VcSchemaTube;
type VkPipeline VcTube;
type VkShaderModule VcModuleOmbrage;
type VkPipelineCache VcCacheTube;
type VkQueryPool VcPiscineRequete;
type VkFence VcBarriere;
type VkSemaphore VcSemaphore;
type VkEvent VcEvenement;
type VkRenderPass VcPasseRendu;

// Struct utilitaires de Vulkan

type VkExtent2D VcEtendu2D;
type VkExtent3D VcEtendu3D;
type VkOffset2D VcDecalage2D;
type VkOffset3D VcDecalage3D;
type VkRect2D VcRectangle2D;
type VkBaseInStructure VcStructureEntreeDeBase;
type VkBaseOutStructure VcStructureSortieDeBase;
type VkBufferMemoryBarrier VcBarriereMemoireTampon;
type VkDispatchIndirectCommand VcRepartieCommandesIndirect;
type VkDrawIndexedIndirectCommand VcRepartieCommandesDessinIndexesIndirectes;
type VkDrawIndirectCommand VcRepartieCommandesDessinIndirectes;
type VkImageSubresourceRange VcSousresourceImageIntervalle;
type VkImageMemoryBarrier VcBarriereMemoireImage;
type VkMemoryBarrier VcBarriereMemoire;
type VkAllocationCallbacks VcFonctionsAllocations;

// Enum

type VkStructureType VcTypeStructure;
type VkImageLayout VcSchemaImage;
type VkObjectType VcTypeObjet;
type VkVendorId VcIdentifiantVendeur;
type VkPipelineCacheHeaderVersion VcVersionEnteteCacheTube;
type VkSystemAllocationScope VcViseurSystemeAllocation;
type VkInternalAllocationType VcTypeAllocationInterne;
type VkFormat VcFormat;
type VkImageTiling VcCadrillageImage;
type VkImageType VcTypeImage;
type VkPhysicalDeviceType VcTypeCarteGraphique;
type VkQueryType VcTypeRequete;
type VkSharingMode VcModePartage;
type VkComponentSwizzle VcTourbillionComposant;
type VkImageViewType VcTypeVueImage;
type VkBlendFactor VcFacteurMixage;
type VkBlendOp VcOperationMixage;
type VkCompareOp VcOperationComparer;
type VkDynamicState VcEtatDynamique;
type VkFrontFace VcVisageAvant;
type VkVertexInputRate VcFrequenceEntreeSommet;
type VkPrimitiveTopology VcTopologiePrimitive;
type VkPolygonMode VcModePolygone;
type VkStencilOp VcOperationPochoir;
type VkLogicOp VcOperationLogique;
type VkBorderColor VcCouleurFrontiere;
type VkFilter VcFiltre;
type VkSamplerAddressMode VcModeAddresseEchantilloneur;
type VkSamplerMipmapMode VcModeEchantillonageMipmap;
type VkDescriptorType VcTypeDescripteur;
type VkAttachmentLoadOp VcOperationChargementAttachement;
type VkAttachmentStoreOp VcOperationStorageAttachement;
type VkPipelineBindPoint VcPointLienTube;
type VkCommandBufferLevel VcNiveauTamponCommande;
type VkIndexType VcTypeIndex;
type VkSubpassContents VcContenuSouspass;

// Flags bits

type VkAccessFlagBits VcBitsDrapeauAcces;
type VkImageAspectFlagBits VcBitsDrapeauAspectImage;
type VkFormatFeatureFlagBits VcBitsDrapeauFonctionnaliteFormat;
type VkImageCreateFlagBits VcBitsDrapeauCreationImage;
type VkSampleCountFlagBits VcBitsDrapeauNombreEchantillon;
type VkImageUsageFlagBits VcBitsDrapeauUtilisationImage;
type VkMemoryHeapFlagBits VcBitsDrapeauTasMemoire;
type VkMemoryPropertyFlagBits VcBitsDrapeauProprieteMemoire;
type VkQueueFlagBits VcBitsDrapeauFil;
type VkDeviceQueueCreateFlagBits VcBitsDrapeauCreationPeripherique;
type VkPipelineStageFlagBits VcBitsDrapeauStageTube;
type VkSparseMemoryBindFlagBits VcBitsDrapeauLiageMemoireSeme;
type VkSparseImageFormatFlagBits VcBitsDrapeauSemeFormatImage;
type VkFenceCreateFlagBits VcBitsDrapeauCreationBarriere;
type VkEventCreateFlagBits VcBitsDrapeauCreationEvenement;
type VkQueryPipelineStatisticFlagBits VcBitsDrapeauRequeteStatistiqueTube;
type VkQueryResultFlagBits VcBitsDrapeauResultatRequete;
type VkBufferCreateFlagBits VcBitsDrapeauCreationTampon;
type VkBufferUsageFlagBits VcBitsDrapeauUtilisationTampon;
type VkImageViewCreateFlagBits VcBitsDrapeauCreationVueImage;
type VkShaderModuleCreateFlagBits VcBitsDrapeauCreationModuleOmbrage;
type VkPipelineCacheCreateFlagBits VcBitsDrapeauCreationCacheTube;
type VkColorComponentFlagBits VcBitsDrapeauComposantCouleur;
type VkPipelineCreateFlagBits VcBitsDrapeauCreationTube;
type VkPipelineShaderStageCreateFlagBits VcBitsDrapeauCreationStageOmbrageTube;
type VkShaderStageFlagBits VcBitsDrapeauStageOmbrage;
type VkCullModeFlagBits VcBitsDrapeauModeCueillage;
type VkSamplerCreateFlagBits VcBitsDrapeauCreationEchantilloneur;
type VkDescriptorPoolCreateFlagBits VcBitsDrapeauCreationPiscineDescripteur;
type VkDescriptorSetLayoutCreateFlagBits VcBitsDrapeauCreationSchemaEnsembleDescripteur;
type VkAttachmentDescriptionFlagBits VcBitsDrapeauDescriptionAttachement;
type VkDependencyFlagBits VcBitsDrapeauDependence;
type VkFramebufferCreateFlagBits VcBitsDrapeauCreationTamponImage;
type VkRenderPassCreateFlagBits VcBitsDrapeauCreationPasseRendu;
type VkSubpassDescriptionFlagBits VcBitsDrapeauDescriptionSouspasse;
type VkCommandPoolCreateFlagBits VcBitsDrapeauCreationPiscineCommande;
type VkCommandPoolResetFlagBits VcBitsDrapeauRenitialisationPiscineCommande;
type VkCommandBufferUsageFlagBits VcBitsDrapeauUtilisationTamponCommande;
type VkQueryControlFlagBits VcBitsDrapeauControleRequete;
type VkCommandBufferResetFlagBits VcBitsDrapeauRenitialisationTamponCommande;
type VkStencilFaceFlagBits VcBitsDrapeauFacePochoir;

// Propriétés, create info et mémoire

type VkApplicationInfo VcInfoApplication;
type VkFormatProperties VcProprietesFormat;
type VkImageFormatProperties VcProprietesFormatImage;
type VkInstanceCreateInfo VcInformationCreationInstance;
type VkMemoryHeap VcMemoireTas;
type VkMemoryType VcTypeMemoire;
type VkPhysicalDeviceFeatures VcFonctionnalitesCarteGraphique;
type VkPhysicalDeviceLimits VcLimitesCarteGraphique;
type VkPhysicalDeviceMemoryProperties VcProprietesMemoireCarteGraphique;
type VkPhysicalDeviceSparseProperties VcProprietesSemeCarteGraphique;
type VkPhysicalDeviceProperties VcProprietesCarteGraphique;
type VkQueueFamilyProperties VcProprietesFamilleFile;
type VkDeviceQueueCreateInfo VcInformationCreationFilPeripherique;
type VkDeviceCreateInfo VcInformationCreationPeripherique;
type VkExtensionProperties VcProprietesExtension;
type VkLayerProperties VcProprietesCouche;
type VkSubmitInfo VcInformationEnvoi;
type VkMappedMemoryRange VcIntervalleMemoireCartographie;
type VkMemoryAllocateInfo VcInformationAllocationMemoire;
type VkMemoryRequirements VcConditionsMemoire;
type VkSparseMemoryBind VcSemeMemoireLie;
type VkSparseBufferMemoryBindInfo VcInformationSemeMemoireTamponLie;
type VkSparseImageOpaqueMemoryBindInfo VcInformationSemeImageOpaqueMemoireLie;
type VkImageSubresource VcSousresourceImage;
type VkSparseImageMemoryBind VcSemeMemoireImageLie;
type VkSparseImageMemoryBindInfo VcInformationSemeMemoireImageLie;
type VkBindSparseInfo VcInformationSemeLie;
type VkSparseImageFormatProperties VcProprietesFormatImageSeme;
type VkSparseImageMemoryRequirements VcConditionsImageMemoireSeme;
type VkFenceCreateInfo VcInformationCreationBarriere;
type VkSemaphoreCreateInfo VcInformationCreationSemaphore;
type VkEventCreateInfo VcInformationCreationEvenement;
type VkQueryPoolCreateInfo VcInformationCreationPiscineRequete;
type VkBufferCreateInfo VcInformationCreationTampon;
type VkBufferViewCreateInfo VcInformationCreationVueTampon;
type VkImageCreateInfo VcInformationCreationImage;
type VkSubresourceLayout VcSchemaSousresource;
type VkComponentMapping VcCartographieComposants;
type VkImageViewCreateInfo VcInformationCreationVueImage;
type VkShaderModuleCreateInfo VcInformationCreationModuleOmbrage;
type VkPipelineCacheCreateInfo VcInformationCreationCacheTube;
type VkSpecializationMapEntry VcSpecialisationEntreeCarte;
type VkSpecializationInfo VcInformationSpecialisation;
type VkPipelineShaderStageCreateInfo VcInformationCreationStageOmbrageTube;
type VkComputePipelineCreateInfo VcInformationCreationTubeCalcul;
type VkVertexInputBindingDescription VcDescriptionEntreeSommetLiage;
type VkVertexInputAttributeDescription VcDescriptionEntreeSommetAttribut;
type VkPipelineVertexInputStateCreateInfo VcInformationCreationEtatEntreeSommetTube;
type VkPipelineInputAssemblyStateCreateInfo VcInformationCreationEtatEntreeAssembleeTube; // L'assembléeeeeeeeeeeeeeeeeeeeeeee
type VkPipelineTessellationStateCreateInfo VcInformationCreationEtatTessellationTube;
type VkViewport VcPortvue;
type VkPipelineViewportStateCreateInfo VcInformationCreationEtatPortvueTube;
type VkPipelineRasterizationStateCreateInfo VcInformationCreationEtatRasterisationTube;
type VkPipelineMultisampleStateCreateInfo VcInformationCreationEtatMultiEchantilloneursTube;
type VkStencilOpState VcEtatOperationPochoir;
type VkPipelineDepthStencilStateCreateInfo VcInformationCreationEtatProfondeurPochoirTube;
type VkPipelineColorBlendAttachmentState VcEtatAttachementMixageCouleurTube;
type VkPipelineColorBlendStateCreateInfo VcInformationCreationEtatMixageCouleurTube;
type VkPipelineDynamicStateCreateInfo VcInformationCreationEtatDynamiqueTube;
type VkGraphicsPipelineCreateInfo VcInformationCreationTubeGraphique;
type VkPushConstantRange VcIntervallePousseConstante;
type VkPipelineLayoutCreateInfo VcInformationCreationSchemaTube;
type VkSamplerCreateInfo VcInformationCreationEchantilloneur;
type VkCopyDescriptorSet VcCopieEnsembleDescripteur;
type VkDescriptorBufferInfo VcInformationTamponDescripteur;
type VkDescriptorImageInfo VcInformatioonImageDescripteur;
type VkDescriptorPoolSize VcTaillePiscineDescripteur;
type VkDescriptorPoolCreateInfo VcInformationCreationPiscineDescripteur;
type VkDescriptorSetAllocateInfo VcInformationAllocationEnsembleDescripteur;
type VkDescriptorSetLayoutBinding VcLiageSchemaEnsembleDescripteur;
type VkDescriptorSetLayoutCreateInfo VcInformationCreationSchemaEnsembleDescripteur;
type VkWriteDescriptorSet VcEcritureEnsembleDescripteur;
type VkAttachmentDescription VcDescriptionAttachement;
type VkAttachmentReference VcReferenceAttachement;
type VkFramebufferCreateInfo VcInformationCreationTamponImage;
type VkSubpassDescription VcDescriptionSouspasse;
type VkSubpassDependency VcDependenceSouspasse;
type VkRenderPassCreateInfo VcInformationCreationPasseRendu;
type VkCommandPoolCreateInfo VcInformationCreationPiscineCommande;
type VkCommandBufferAllocateInfo VcInformationAllocationTamponCommande;
type VkCommandBufferInheritanceInfo VcInformationInheritanceTamponCommande;
type VkCommandBufferBeginInfo VcInformationDebutTamponCommande;
type VkBufferCopy VcCopieTampon;
type VkImageSubresourceLayers VcCoucheSousresourcesImage;
type VkBufferImageCopy VcCopieTamponImage;
type VkClearColorValue VcValeurNettoyageCouleur;
type VkClearDepthStencilValue VcValeurNettoyageProfondeurPochoir;
type VkClearValue VcValeurNettoyage;
type VkClearAttachment VcNettoyageAttachement;
type VkClearRect VcNettoyageRectangle;
type VkImageBlit VcDeesinImage;
type VkImageCopy VcCopieImage;
type VkImageResolve VcResoueImage;
type VkRenderPassBeginInfo VcInformationDebutPasseRendu;

// FONCTIONS DE BASE

#define vkCreateInstance vcCreeInstance
#define vkEnumerateInstanceExtensionProperties vcDenombreProprietesExtensionInstance
#define vkEnumerateInstanceLayerProperties vcDenombreProprietesCoucheInstance
#define vkEnumerateInstanceVersion vkDenombreVersionInstance

// FONCTIONS INSTANCE

#define vkCreateDevice vcCreePeripherique
#define vkDestroyInstance vcDetruitInstance
#define vkEnumerateDeviceExtensionProperties vcDenombreProprietesExtensionPeripherique
#define vkEnumerateDeviceLayerProperties vcDenombreProprietesCouchePeripherique
#define vkEnumeratePhysicalDevices vcDenombreCarteGraphique
#define vkGetDeviceProcAddr vcObtientAddresseProcessusPeripherique
#define vkGetPhysicalDeviceFeatures vcObtientFonctionnalitesCarteGraphique
#define vkGetPhysicalDeviceFormatProperties vcObtientProprietesFormatCarteGraphique
#define vkGetPhysicalDeviceImageFormatProperties vcOptientProprietesFormatImageCarteGraphique
#define vkGetPhysicalDeviceMemoryProperties vcOptientProprietesMemoireCarteGraphique
#define vkGetPhysicalDeviceProperties vcOptientProprietesCarteGraphique
#define vkGetPhysicalDeviceQueueFamilyProperties vcObtientProprietesFamilleFilCarteGraphique
#define vkGetPhysicalDeviceSparseImageFormatProperties vcObtientProprietesSemeFormatImageCarteGraphique
// TODO: extensions même si en vrai j'en ai déjà marre de ce projet à la con

#endif
