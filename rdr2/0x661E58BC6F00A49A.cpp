// ambush_exc_road_robbery.ysc @ L25336
bool func_856(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
  if (!func_309(uParam0->f_5))
  {
    return false;
  }
  if (func_963(uParam0->f_5, 1))
  {
    func_40(uParam0, 1);
    uParam0->f_6 = func_964(uParam0->f_5, 1);
    uParam0->f_7 = func_965(uParam0->f_5, 1);
    if (bParam8)
    {
      func_310(&(uParam0->f_5), 1, 1);
    }
    CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, true, iParam5, iParam6, iParam7, 0);
    CAM::SET_GAMEPLAY_HINT_FOV(30f);
    return true;
  }
  return false;
}