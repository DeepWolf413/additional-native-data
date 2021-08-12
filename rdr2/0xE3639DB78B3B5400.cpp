// rcm_bh_skinner_brother.ysc @ L7607
bool func_291(var uParam0)
{
  func_575(&Local_19, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
  func_326(uParam0);
  if (func_302(iLocal_403, 0))
  {
    if ((((func_576(iLocal_403) || func_577(iLocal_403, &uLocal_414, uParam0, "RBT18_PLYRSPOT")) || bLocal_459) || bLocal_440) || ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_515, 30f, 30f, 30f, false, true, 0))
    {
      func_578();
      func_295(uParam0->f_174, 1);
      func_296(&Local_19, 4, 1);
      return true;
    }
  }
  else if (ENTITY::DOES_ENTITY_EXIST(iLocal_403))
  {
    func_578();
    func_299(&Local_19);
    CAM::_0xE3639DB78B3B5400(iLocal_403);
    func_328(uParam0->f_174, 1);
    return true;
  }
  return false;
}