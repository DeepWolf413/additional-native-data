// abigail2_1.ysc @ L38096
void func_912(bool bParam0)
{
  int iVar0;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  if (!func_190(0, 0, 1) || bParam0)
  {
    iVar0 = func_1024();
    iVar1 = func_1027(iVar0);
    fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
    fVar3 = func_1451(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
    fVar4 = func_1451(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
    GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
    GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
    GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
    GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
  }
  else
  {
    GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
  }
}