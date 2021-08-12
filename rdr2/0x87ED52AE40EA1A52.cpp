// camp_pronghornranch.ysc @ L23868
void func_806(var uParam0)
{
  if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
  {
    SCRIPTS::TERMINATE_THREAD(*uParam0);
  }
}