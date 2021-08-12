// am_mp_arc_cab_manager.ysc @ L92410
int func_823(int* iParam0, var* uParam1, int iParam2, char* sParam3)
{
  if (!func_100(&(uParam1->f_744)))
  {
    func_829(&(uParam1->f_744), 0, 0);
    func_828(uParam1, sParam3);
  }
  else if (func_824(uParam1) || func_98(&(uParam1->f_744), iParam2, 0))
  {
    GRAPHICS::_RELEASE_BINK_MOVIE(uParam1->f_5);
    return 1;
  }
  return 0;
}