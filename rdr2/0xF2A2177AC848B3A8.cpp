// marston2.ysc @ L18648
void func_174(int iParam0)
{
  int iVar0;

  iVar0 = 22;
  while (iVar0 <= 24)
  {
    if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0]))
    {
      PATHFIND::_0xF2A2177AC848B3A8(iLocal_93[iVar0], iParam0, 1);
    }
    iVar0++;
  }
}