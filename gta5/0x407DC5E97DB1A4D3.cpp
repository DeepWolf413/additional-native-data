// am_mp_submarine.ysc @ L451252
void func_7020(var uParam0, int iParam1)
{
  if (func_4869(*uParam0) && ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
  {
    VEHICLE::_0x407DC5E97DB1A4D3(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0), iParam1);
  }
}