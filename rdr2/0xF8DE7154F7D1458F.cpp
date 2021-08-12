// beat_bandito_breakout.ysc @ L2022
bool func_55()
{
  var uVar0;
  int iVar1;
  int iVar2;

  uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("AMD_CORPSE_WAGON_DRIVER"));
  if (PERSCHAR::_0x800DF3FC913355F3(uVar0))
  {
    iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(uVar0);
    iVar2 = PERSCHAR::_0xF8DE7154F7D1458F(uVar0);
    if (func_34(iVar1, 0, 1))
    {
      if (Local_844.f_161 || ENTITY::IS_ENTITY_OCCLUDED(iVar1))
      {
        if (ENTITY::DOES_ENTITY_EXIST(iVar2))
        {
          if (ENTITY::IS_ENTITY_OCCLUDED(iVar2) || Local_844.f_161)
          {
            PERSCHAR::_0x7B204F88F6C3D287(uVar0);
            VEHICLE::DELETE_VEHICLE(&iVar2);
          }
        }
        else
        {
          PERSCHAR::_0x7B204F88F6C3D287(uVar0);
        }
      }
      return false;
    }
  }
  return true;
}