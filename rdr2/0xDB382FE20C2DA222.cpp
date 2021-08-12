// dominoes_sp.ysc @ L4348
void func_135(var uParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar3;
  int iVar6;

  iVar6 = joaat("P_DOMINORACK01X");
  func_276(uParam0, func_275(iParam1), &vVar0);
  func_277(uParam0, iParam1, &vVar3);
  func_266(&(uParam0->f_971[iParam1]));
  uParam0->f_971[iParam1] = OBJECT::CREATE_OBJECT(iVar6, vVar0, false, true, false, false, true);
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_971[iParam1]))
  {
    ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_971[iParam1], true);
    CAM::_0xDB382FE20C2DA222(uParam0->f_971[iParam1]);
    ENTITY::SET_ENTITY_ROTATION(uParam0->f_971[iParam1], vVar3, 2, true);
    ENTITY::SET_ENTITY_COLLISION(uParam0->f_971[iParam1], false, false);
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_976[iParam1]))
  {
    func_278(&(uParam0->f_976[iParam1]), vVar0, vVar3, 0.3f, 0.08f, 0.15f, "RACK");
  }
}