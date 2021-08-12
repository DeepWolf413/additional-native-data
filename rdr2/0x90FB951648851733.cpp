// act_bankrobbery01.ysc @ L56937
void func_1829(int iParam0, float fParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
  if (func_1079(&(fParam1->f_3), 1))
  {
    func_1080(fParam1);
    if (func_1961(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
    {
      func_1082();
    }
  }
  if (func_1083(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam7))
  {
    CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
    func_1084(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
  }
}