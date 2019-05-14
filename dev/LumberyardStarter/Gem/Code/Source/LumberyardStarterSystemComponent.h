#pragma once

#include <AzCore/Component/Component.h>

#include <LumberyardStarter/LumberyardStarterBus.h>

namespace LumberyardStarter
{
    class LumberyardStarterSystemComponent
        : public AZ::Component
        , protected LumberyardStarterRequestBus::Handler
    {
    public:
        AZ_COMPONENT(LumberyardStarterSystemComponent, "{369C46FC-8F6A-4937-B364-5824AF1E4EF2}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // LumberyardStarterRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
