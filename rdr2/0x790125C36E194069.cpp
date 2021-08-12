// braithwaites3.ysc @ L18236
void func_183()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < iLocal_793)
  {
    if (iLocal_793[iVar0] != 0)
    {
      FIRE::REMOVE_SCRIPT_FIRE(iLocal_793[iVar0]);
    }
    iVar0++;
  }
}