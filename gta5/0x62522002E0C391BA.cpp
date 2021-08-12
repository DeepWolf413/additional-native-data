// am_mp_peds.ysc @ L92547
int func_1176(var uParam0)
{
  int iVar0;
  int iVar1;
  
  iVar1 = uParam0->f_30;
  if (func_70(*uParam0))
  {
    iVar0 = TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1785177548);
  }
  if (func_86(&(uParam0->f_9), 6))
  {
    iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_30);
  }
  if (func_86(&(uParam0->f_9), 24))
  {
    if (uParam0->f_30.f_7 == 0 || ((uParam0->f_30.f_7 - Global_1316851.f_10) <= 0 && ((iVar1 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= func_1109(uParam0))))
    {
      return 1;
    }
  }
  if ((iVar1 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1)) && PED::IS_SYNCHRONIZED_SCENE_LOOPED(iVar1))
  {
    return 0;
  }
  if (((iVar0 != 0 && iVar0 != 1) || ((iVar1 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= func_1109(uParam0))) || iVar1 == -1)
  {
    return 1;
  }
  return 0;
}