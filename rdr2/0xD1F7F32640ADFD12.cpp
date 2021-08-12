// act_caunc_rustling.ysc @ L42219
void func_1105(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13)
{
  if (func_1106(&(uParam1->f_3), 1))
  {
    func_1560(uParam1);
    if (func_1561(iParam0, fParam7, fParam11, bParam12, bParam13, 1084227584 /* Float: 5f */))
    {
      func_683();
    }
  }
  if (func_1562(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
  {
    CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10, 0);
    func_1563(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
  }
}