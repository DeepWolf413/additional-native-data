// beat_public_hanging.ysc @ L15008
void func_356()
{
  vector3 vVar0;

  if (func_51(iLocal_1019, 1) && !func_51(iLocal_1020, 268435456))
  {
    if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
    {
      vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_946[0], 21030, 0f, 0f, 0f) };
      if ((((iLocal_984 == 76 && vVar0.z < 119.465f) || (iLocal_984 == 105 && vVar0.z < 83.85f)) || (iLocal_984 == 5 && vVar0.z < 52.17f)) || (iLocal_984 == 38 && vVar0.z < 46.16f))
      {
        PHYSICS::_0x814D453FCFDF119F(iLocal_945, 1, -999);
        func_60(&iLocal_1020, 268435456);
      }
    }
  }
}