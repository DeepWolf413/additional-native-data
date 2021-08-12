// maintransition.ysc @ L119059
void func_1078(bool bParam0)
{
  int iVar0;
  int iVar1;
  char* sVar2;
  var uVar10;
  
  OBJECT::_0x66A49D021870FE88();
  iVar0 = 0;
  while (iVar0 < 3)
  {
    iVar1 = 0;
    while (func_1079(iVar0, iVar1, &sVar2, &uVar10))
    {
      OBJECT::ENABLE_SAVING_IN_GARAGE(MISC::GET_HASH_KEY(&sVar2), false);
      if (bParam0)
      {
        OBJECT::CLEAR_OBJECTS_INSIDE_GARAGE(MISC::GET_HASH_KEY(&sVar2), true, false, false, false);
      }
      iVar1++;
    }
    iVar0++;
  }
}