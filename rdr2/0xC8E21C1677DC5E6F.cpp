// camp_beaverhollow.ysc @ L29656
void func_980(int iParam0, float fParam1)
{
  switch (ENTITY::GET_ENTITY_MODEL(iParam0))
  {
    case joaat("P_CAMPFIRE02X_SCRIPT"):
    case joaat("P_CAMPFIRE05X"):
    case joaat("S_COOKFIRE01X"):
    case joaat("P_CAMPFIRE02XB"):
      OBJECT::_SET_OBJECT_BURN_INTENSITY(iParam0, fParam1);
      break;
  }
}