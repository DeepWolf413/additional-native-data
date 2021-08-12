// native_son3.ysc @ L95320
void func_2565(int iParam0)
{
  switch (iParam0)
  {
    case 0:
      MISC::_FORCE_LIGHTNING_FLASH_AT_COORDS(-991.77f, 1724.11f, 254.6f, -1f);
      break;
    case 1:
      MISC::_FORCE_LIGHTNING_FLASH_AT_COORDS(-1398.76f, 2609.53f, 331.65f, -1f);
      break;
    default:
      MISC::FORCE_LIGHTNING_FLASH();
      break;
  }
}