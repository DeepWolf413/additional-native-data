// property_use_core.ysc @ L2596
void func_69(int iParam0)
{
  vector3 vVar0;

  if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
  {
    PED::_0xA3A9299C4F2ADB98(Global_35);
  }
  if (iParam0->f_23 == 3)
  {
    vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_29, true) };
    TASK::_0x4161648394262FDF(vVar0, 0.5f);
    if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_2468))
    {
      ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_2468, "player", Global_35);
      ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_2468);
    }
    GRAPHICS::_0xA21AF60C9F99CCC5();
  }
  func_223(func_186(iParam0->f_23));
  if (iParam0->f_1 != 9)
  {
    func_224(&(iParam0->f_43));
  }
  iParam0->f_23 = -1;
  iParam0->f_29 = 0;
  func_6(iParam0, 10);
}