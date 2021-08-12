// exile3.ysc @ L119243
void func_791(bool bParam0)
{
  if (!PED::IS_PED_INJURED(iLocal_854[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_871, false))
  {
    iLocal_1302 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
    PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1302, iLocal_871, 0);
    TASK::TASK_SYNCHRONIZED_SCENE(iLocal_854[0], iLocal_1302, func_236(2), "ex03_attack_driver_outro_driver", 1000f, -8f, 0, 2, 1000f, 0);
    if (!bParam0)
    {
      PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1302, 0.277f);
    }
    else
    {
      PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1302, 1f);
    }
    PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_854[0], false, false);
  }
}