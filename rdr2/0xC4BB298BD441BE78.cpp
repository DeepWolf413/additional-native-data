// long_update.ysc @ L11699
void func_358()
{
  bool bVar0;
  int iVar1;
  var uVar2;

  bVar0 = false;
  iVar1 = func_1009();
  if (iVar1 == 0)
  {
    return;
  }
  if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
  {
    SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
    if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
    {
      Global_1425351.f_19 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar2, 10, 1024);
      bVar0 = true;
    }
  }
  else
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
  }
}