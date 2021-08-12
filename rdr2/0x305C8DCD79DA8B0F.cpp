// ambush_exc_road_robbery.ysc @ L25358
void func_857(var uParam0, var uParam1, var uParam2, var uParam3)
{
  if (*uParam0 == 0)
  {
    if (func_858(&uParam1) < 500)
    {
      if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, joaat("INPUT_FOCUS_CAM")))
      {
        *uParam0 = 2;
      }
    }
    else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
    {
      *uParam0 = 1;
    }
  }
}