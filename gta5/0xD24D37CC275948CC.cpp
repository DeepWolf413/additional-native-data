// abigail1.ysc @ L33897
int func_200(char* sParam0, int iParam1)
{
  int iVar0;
  char* sVar1;
  int iVar33;
  int iVar34;
  
  iVar33 = MISC::GET_HASH_KEY(sParam0);
  iVar34 = 0;
  iVar34 = 0;
  while (iVar34 < 63)
  {
    iVar0 = iVar34;
    func_163(iVar0, &sVar1);
    if (MISC::GET_HASH_KEY(sVar1) == iVar33)
    {
      return iVar0;
    }
    iVar34++;
  }
  if (iParam1 == 0)
  {
  }
  return -1;
}