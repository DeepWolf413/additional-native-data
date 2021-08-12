// beat_booby_trap.ysc @ L10154
bool func_282(int iParam0, var uParam1, bool bParam2)
{
  if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
  {
    if (bParam2 || *uParam1 == 3)
    {
      OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 6);
      *uParam1 = 4;
    }
  }
  return false;
}