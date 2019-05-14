
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <LumberyardStarterSystemComponent.h>

namespace LumberyardStarter
{
    class LumberyardStarterModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(LumberyardStarterModule, "{09E47749-0D95-406C-9B50-4333E3E45FD1}", AZ::Module);
        AZ_CLASS_ALLOCATOR(LumberyardStarterModule, AZ::SystemAllocator, 0);

        LumberyardStarterModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                LumberyardStarterSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<LumberyardStarterSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(LumberyardStarter_9a1861582a9642b2a8a7c3a5f11e4bea, LumberyardStarter::LumberyardStarterModule)
