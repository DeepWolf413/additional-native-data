// beat_hunter.ysc @ L4969
void func_164()
{
  int iVar0;
  int iVar1;

  if ((((!func_52(65536) && ENTITY::DOES_ENTITY_EXIST(uLocal_225[1])) && ENTITY::_0x8DE41E9902E85756(uLocal_225[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_225[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_225[0]))
  {
    iVar0 = 0;
    iVar1 = PED::_GET_PED_DAMAGE(uLocal_225[1]);
    if (PED::_0x101B45C5F56D970F(&iVar0, uLocal_225[1], iVar1, 1))
    {
      func_102(uLocal_225[0], iVar0, 1, 0);
    }
    func_95(65536);
  }
}