// discoverable_generic_carriable.ysc @ L17600
bool func_320(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, float fParam10)
{
  if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam8]))
  {
    (*uParam0)[iParam8] = PED::_0x9641A9A20310F6B8(iParam1, vParam2, vParam5, 1, fParam9, fParam10);
    if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam8]))
    {
      ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam8], vParam2, true, false, true, true);
      ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam8], vParam5, 2, true);
      ENTITY::SET_CAN_CLIMB_ON_ENTITY((*uParam0)[iParam8], false);
    }
    else
    {
      return false;
    }
  }
  return true;
}