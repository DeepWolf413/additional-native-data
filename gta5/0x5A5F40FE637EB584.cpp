// arena_carmod.ysc @ L136969
int func_1268(char* sParam0)
{
  int iVar0;
  
  if ((MISC::STRING_TO_INT(sParam0, &iVar0) && iVar0 >= 0) && iVar0 <= 9)
  {
    return 1;
  }
  return 0;
}