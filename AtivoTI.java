//package techlab-technology;

public class AtivoTI {
    private String id;
    private String codigoPatrimonio;
    private String modelo;
    private String status;

    //Construtor
    public AtivoTI(String id, String codigoPatrimonio, String modelo,
         String status){
            this.id = id;
            this.codigoPatrimonio = codigoPatrimonio;
            this.modelo = modelo;
            this.status = status;
         }

         //getters e setters
         public String getID(){
            return id;
         }

         public void setID(String id){
            this.id = id;
         }

         public String getCodigoPatrimonio(){
            return codigoPatrimonio;
         }

         public void setCodigoPatrimonio(String codigoPatrimonio){
            this.codigoPatrimoni = codigoPatrimonio;
         }

         public String getModelo(){
            return modelo;
         }

         public void setModelo(String modelo){
            this.modelo = modelo;
         }

         public String getStatus(){
            return status;
         }

         public void setStatus(String status){
            this.status = status;
         }
         
}