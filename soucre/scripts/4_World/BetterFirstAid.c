class Better_First_Aid_Basic_Big : FirstAidKit
{
    override bool CanReceiveItemIntoCargo(EntityAI item)
    {
        if (item)
        {
            if (HasFunctionalInventory(item) && !IsInventoryEmpty(item))
            {
                return false;
            }

            if (HasAttachments(item) && !AreAttachmentsEmpty(item))
            {
                return false;
            }

            return super.CanReceiveItemIntoCargo(item);
        }
        return super.CanReceiveItemIntoCargo(item);
    }

    private bool HasFunctionalInventory(EntityAI item)
    {
        CargoBase cargo = item.GetInventory().GetCargo();
        if (cargo)
        {
            return cargo.GetHeight() > 0 && cargo.GetWidth() > 0;
        }
        return false;
    }

    private bool IsInventoryEmpty(EntityAI item)
    {
        CargoBase cargo = item.GetInventory().GetCargo();
        if (cargo)
        {
            return cargo.GetItemCount() == 0;
        }
        return true;
    }

    private bool HasAttachments(EntityAI item)
    {
        return item.GetInventory().GetAttachmentSlotsCount() > 0;
    }

    private bool AreAttachmentsEmpty(EntityAI item)
    {
        return item.GetInventory().AttachmentCount() == 0;
    }
};