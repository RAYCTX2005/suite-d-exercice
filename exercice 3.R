############
# exercice 1
############

install.packages("xlsx")
#import de la nouvelle base de donnée
library("readxl")
new_data_base<-read_xlsx("base de donnée exemple.xlsx",sheet="Sheet1")

#export de la base de donnée
library(writexl)
writexl::write_xlsx(new_data_base,"base_de_donnée_exemple_nouveaux.xlsx")

#statistique descriptive
summary(new_data_base)


##############
#test de Khi-2
##############
#exemple
matice_de_new_donnée<-data.matrix(new_data_base)

# Creation de la matrice des variable à observé
observation <- matice_de_new_donnée[,c("age","taille")]

# Calcul des valeurs théoriques
théorique <- rowSums(observation) %*% t(colSums(observation)) / sum(observation)

# Degrés de liberté
df <- (nrow(théorique) - 1) * (ncol(théorique) - 1)

# Statistique du chi-carré
chi_2 <- sum((observation- théorique)^2 / théorique)

# P-value
p_value <- pchisq(chi_2, df, lower.tail = FALSE)

cat("les statistiques de chi-2:", chi_2, "\n")
cat("Degré de liberté:", df, "\n")
cat("P-value:", p_value, "\n")
