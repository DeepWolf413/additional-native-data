// am_mp_arena_box.ysc @ L76464
void func_408(var uParam0, int iParam1)
{
  if (MISC::IS_BIT_SET(uParam0->f_1, 16))
  {
    return;
  }
  if (func_392())
  {
    func_401(uParam0, 1);
    uParam0->f_27 = iParam1;
  }
  else
  {
    MONEY::_NETWORK_SPENT_SPIN_THE_WHEEL_PAYMENT(Global_262145.f_23750, 0, true);
    Global_2518654 = 0;
  }
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
}