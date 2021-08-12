// camp_beaverhollow.ysc @ L32630
void func_1057(int iParam0, float fParam1, float fParam2, float fParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    OBJECT::_0xF49574E2332A8F06(iParam0, fParam1);
    OBJECT::_SET_OBJECT_BURN_INTENSITY(iParam0, fParam2);
    OBJECT::_0xCBFBD38F2E0A263B(iParam0, fParam3);
  }
}