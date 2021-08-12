// bounty1.ysc @ L49542
void func_1248()
{
  vector3 vVar0;
  float fVar3;
  vector3 vVar4;
  float fVar7;
  float fVar8;
  float fVar9;

  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_141))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false) + Vector(10f, 0f, 0f) };
    if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar0, 0, &(vVar0.f_2)) == 1)
    {
      fVar3 = 0.17f;
      vVar4 = { PED::GET_PED_BONE_COORDS(iLocal_111, 21030, 0f, 0f, 0f) + Vector(fVar3, 0f, 0f) };
      fVar7 = (vVar4.z - vVar0.z);
      fVar8 = (fVar7 / (0.15f + fVar3));
      fVar9 = func_918(fVar8, 0.1f, 1f);
      func_1238(fVar9);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_141, vVar0, 0f, 0f, 0f);
    }
    else
    {
      GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_141, PED::GET_PED_BONE_COORDS(iLocal_111, 14416, 0f, 0f, 0f), 0f, 0f, 0f);
    }
  }
}