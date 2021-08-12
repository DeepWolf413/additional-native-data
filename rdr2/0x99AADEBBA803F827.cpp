// marston1.ysc @ L54578
void func_1360(bool bParam0, int iParam1)
{
  vector3 vVar0;
  float fVar3;
  float fVar4;

  if (func_455(bParam0, iLocal_961))
  {
    vVar0 = { PED::GET_PED_BONE_COORDS(bParam0, 0, 0f, 0f, 0f) };
    fVar3 = 0f;
    fVar4 = 0f;
    if (bParam0 == Global_35)
    {
      fVar3 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
      fVar4 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
    }
    PED::_0xE0B61ED8BB37712F(bParam0);
    if (iParam1 == 1)
    {
      ENTITY::SET_ENTITY_COORDS(bParam0, vVar0, true, false, true, true);
    }
    if (bParam0 == Global_35)
    {
    }
  }
}