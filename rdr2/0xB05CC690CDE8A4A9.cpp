// beat_foot_robbery.ysc @ L17574
void func_546()
{
  if (!PED::DOES_GROUP_EXIST(iLocal_701))
  {
    iLocal_701 = PED::CREATE_GROUP(0);
  }
  if (PED::DOES_GROUP_EXIST(iLocal_701))
  {
    func_709(&(iLocal_528[0]), &iLocal_701, 1, 1, 1, 1, 0);
    func_709(&(iLocal_528[1]), &iLocal_701, 0, 1, 1, 1, 0);
    PED::SET_GROUP_FORMATION(iLocal_701, 3);
    PED::SET_GROUP_FORMATION_SPACING(iLocal_701, 2f, 1f, 2f);
    PED::_0xB05CC690CDE8A4A9(iLocal_701, 1.5f);
    PED::_0x97C475212B327666(iLocal_701, 1);
    PED::_0x40C3524D4ED83554(iLocal_701, 1);
  }
}