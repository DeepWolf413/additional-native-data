// braithwaites2.ysc @ L70462
void func_1807()
{
  if (!HUD::_UIPROMPT_IS_VALID(iLocal_7452) && iLocal_722 == 0)
  {
    iLocal_7452 = HUD::_UIPROMPT_CREATE(joaat("INPUT_CINEMATIC_CAM"), "BRT2_POV", 6, 1, 1, -1);
    HUD::_UIPROMPT_SET_ATTRIBUTE(iLocal_7452, 9, 1);
    HUD::_UIPROMPT_SET_ENABLED(iLocal_7452, true);
    iLocal_722 = 1;
  }
}