// exile3.ysc @ L130802
void func_978(var uParam0)
{
  if (!PED::IS_PED_INJURED(*uParam0))
  {
    if (PED::IS_PED_DOING_DRIVEBY(*uParam0))
    {
      TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0);
    }
    uParam0->f_1 = 0;
  }
}