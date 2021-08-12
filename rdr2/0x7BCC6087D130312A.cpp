// abigail2_1.ysc @ L82515
void func_2462(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
  *uParam3 = PED::_GET_PED_DAMAGE(iParam0);
  *uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
  if (*uParam2 == 2)
  {
    *uParam1 = 4;
  }
  else if (*uParam2 == 1)
  {
    *uParam1 = 3;
  }
  else
  {
    *uParam4 = PED::_GET_PED_QUALITY(iParam0);
    switch (*uParam4)
    {
      case 0:
        *uParam1 = 0;
        break;
      case 1:
        *uParam1 = 1;
        break;
      case -1:
      case 2:
        *uParam1 = 2;
        break;
    }
  }
}