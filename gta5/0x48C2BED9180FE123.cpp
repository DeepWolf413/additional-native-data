// am_casino_peds.ysc @ L174066
void func_1844(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  if (func_1845(iParam0))
  {
    if (func_15(iParam1))
    {
      if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
      {
        if (bParam3)
        {
          if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0)))
          {
            ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), false);
          }
        }
        else
        {
          ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), false);
        }
      }
      else
      {
        ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
      }
      PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
    }
  }
}