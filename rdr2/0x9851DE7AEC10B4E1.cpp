// av_animal_scavenger.ysc @ L2425
int func_48(var uParam0, vector3 vParam1)
{
  int iVar0;

  iVar0 = PERSISTENCE::_0xBA2C49EA6A8D24FF(vParam1, 3f, 0, 1, 0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (func_82(iVar0, vParam1, 1) <= 1f)
    {
      func_83(*uParam0, uParam0->f_483);
      uParam0->f_499 = 1;
      return 0;
    }
  }
  PED::_0x9851DE7AEC10B4E1(vParam1, 2.5f, 1, 0);
  return 1;
}