// beat_dark_alley_ambush.ysc @ L4383
void func_109()
{
  vector3 vVar0;

  if (!func_26(iLocal_824, 2))
  {
    vVar0 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
    if (ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(Global_35) || func_125(Global_35, vVar0, 0) < 2f)
    {
      if (PED::IS_PED_RAGDOLL(Global_35))
      {
        func_128(&iLocal_824, 2);
        func_285(iLocal_677[0], 0);
        if (!func_26(iLocal_824, 1024) && !func_26(iLocal_824, 64))
        {
          TASK::TASK_REACT(iLocal_677[0], Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 3f, 0, 4);
        }
        func_131(iLocal_677[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
        if (func_292(&uLocal_719))
        {
          func_144(&uLocal_719);
        }
        if (func_292(&uLocal_737))
        {
          func_144(&uLocal_737);
        }
      }
    }
  }
}