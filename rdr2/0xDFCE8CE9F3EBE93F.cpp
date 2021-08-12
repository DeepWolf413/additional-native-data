// spd_chelonianmaster1.ysc @ L4636
void func_133(var uParam0)
{
  int iVar0;
  struct<4> Var1;
  vector3 vVar5;

  iVar0 = 0;
  while (iVar0 < 6)
  {
    Var1 = { func_146(iVar0) };
    vVar5 = { func_287(iVar0) };
    ENTITY::SET_ENTITY_ROTATION(uParam0->f_170[iVar0], vVar5, 0, true);
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_170[iVar0], Var1, Var1.f_3, true, false, true);
    ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_170[iVar0], true);
    ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_170[iVar0], true);
    switch (iVar0)
    {
      case 0:
        func_145(uParam0->f_170[iVar0], 421413709);
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        func_145(uParam0->f_170[iVar0], 1987795078);
        break;
    }
    GRAPHICS::_0xDFCE8CE9F3EBE93F(uParam0->f_170[iVar0]);
    func_288(uParam0->f_170[iVar0], 1, 1);
    iVar0++;
  }
}