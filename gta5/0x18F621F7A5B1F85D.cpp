// heli_gun.ysc @ L8973
void func_218()
{
  if (iLocal_357 != 0)
  {
    GRAPHICS::SET_NIGHTVISION(false);
    if (GRAPHICS::GET_USINGSEETHROUGH())
    {
      GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1668616);
      Global_1668616 = -1f;
      GRAPHICS::SET_SEETHROUGH(false);
    }
    iLocal_357 = 0;
  }
}