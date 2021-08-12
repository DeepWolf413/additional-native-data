// business_battles.ysc @ L237203
void func_3553(bool bParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < func_3974())
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409[iVar0]))
    {
      if (bParam0)
      {
        if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uLocal_2409[iVar0]))
        {
          NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uLocal_2409[iVar0], true);
        }
      }
      else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uLocal_2409[iVar0]))
      {
        NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uLocal_2409[iVar0], false);
      }
    }
    iVar0++;
  }
}